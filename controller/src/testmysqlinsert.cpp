#include "orm.h"
#include <chrono>
#include <thread>
#include <vector>
#include "func.h"
#include "httppeer.h"
#include "testmysqlinsert.h"

namespace http
{
   //@urlpath(null,minsert)
   std::string testmysqlinsert(std::shared_ptr<httppeer> peer)
   {
      httppeer &client = peer->getpeer();
      client << "hello world!  testmysqlinsert ";

      try
      {
         auto articles = orm::cms::Article();
         orm::cms::articlebase::meta a_data;
         std::vector<orm::cms::articlebase::meta> l_data;
         std::string content="<p>ddeebbffgg</p>";
         a_data.isopen=1;
         a_data.title="aabb";
         a_data.createtime=date("%Y-%m-%d %X");
         a_data.addtime=timeid();
         a_data.addip=client.client_ip;
         a_data.content=content;

        auto [effect_num,insertid] = articles.insert(a_data);
        client << "<p>" << std::to_string(insertid) << "</p>";

        for(int i=0;i<10;i++)
        {
          a_data.title="aabb"+std::to_string(rand_range(1000,9999));
          l_data.emplace_back(a_data);
        }
         auto [effect_num1,insertid1] = articles.insert(l_data); 
         client << "<p>" << std::to_string(insertid1) << "</p>";
      }
      catch (std::exception &e)
      {
         client << "<p>" << e.what() << "</p>";
         return "";
      }
      return "";
   }
   //@urlpath(null,mpagebar)
   std::string testmysqlpagebar(std::shared_ptr<httppeer> peer)
   {
      httppeer &client = peer->getpeer();
      client << "hello world!  testmysqlpagebar ";

      try
      {
         auto articles = orm::cms::Article();
         unsigned int page = client.get["page"].to_int();

         articles.where("isopen",1);
         
         auto [bar_min,bar_max,current_page,total_page] = articles.page(page,10,5); //page,per_page_num,navbar_width

         client << "<p>bar_min:" << std::to_string(bar_min) << "</p>";
         client << "<p>bar_max:" << std::to_string(bar_max) << "</p>";
         client << "<p>current_page:" << std::to_string(current_page) << "</p>";
         client << "<p>total_page:" << std::to_string(total_page) << "</p>";


      }
      catch (std::exception &e)
      {
         client << "<p>" << e.what() << "</p>";
         return "";
      }
      return "";
   }  
}