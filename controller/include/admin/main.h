
#pragma once
#include <chrono>
#include <thread>
#include "httppeer.h"

namespace http
{

            
	std::string admin_main(std::shared_ptr<httppeer> peer);
	std::string admin_logout(std::shared_ptr<httppeer> peer);
	std::string admin_welcome(std::shared_ptr<httppeer> peer);
	std::string admin_siteinfo(std::shared_ptr<httppeer> peer);
	std::string admin_siteinfopost(std::shared_ptr<httppeer> peer);
	std::string admin_userinfo(std::shared_ptr<httppeer> peer);
	std::string admin_editpassword(std::shared_ptr<httppeer> peer);
	std::string admin_editpwdpost(std::shared_ptr<httppeer> peer);
}
