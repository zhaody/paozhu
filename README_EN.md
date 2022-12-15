English | [简体中文](README_CN.md)
<div style="text-align: center">
<img alt="paozhu logo" src="docs/images/logo.png">
</div>

paozhu(炮竹🧨) is a comprehensive and fast C++ web framework that integrates ORM. The development speed is as
fast as script languages. The framework integrates a webserver, which can natively parse HTTP 1.1 and HTTP 2 protocols
and GET and POST requests. The framework also distinguishes between different methods of POST requests. The framework
comes with a built-in OBJ micro-object that can store data such as char, int, string, float, etc. The framework
automatically parses URL and POST parameters into the micro-object, and uses URL path mapping to function mounting
points. It also uses coroutines, thread pools, and database connection pools.


QQgroup：668296235  
Discussing the joy of C++ web development with community developers.

### 1.Features🔥🔥🔥🔥🔥

✅ 1. support json decode encode, not use thirdparty, support json standard  
✅ 2. Support multiple domain name websites  
✅ 3. Support multiple domain name ssl server  
✅ 4. Support http1.1 and http2 protocols  
✅ 5. Support websocket server  
✅ 6. The framework comes with websocket push, which supports regular push to websocket client  
✅ 7. Support synchronization of httpclient get post  
✅ 8. The framework comes with an ORM. It uses the link pool method and currently supports MySQL  
✅ 9. Framework has two thread pool,framework thread pool,user program runing thread pool  
✅10. The framework uses asio Coroutines  
✅11. The framework features that I/O uses the coroutine pool to run and thread pool to run  
✅12. The framework supports compress gzip br out files  
✅13. The framework parses the URL and POST. The parsing result is similar to the PHP GET POST method to obtain the
content  
✅14. Integrated sendmail  
✅15. Generating QR code requires gd and qrencode libraries  
✅16. Plugin module,Hot Module Replacement


### 2.Runtime environment

C++ standard request c++20   
boost asio mysql gd MySQL Connector/C++ qrencode
zlib brotli(br)


### 3.environment configuration

#### 3.1MacOS

- system requirements

```
>= BigSur
```
- Install necessary dependencies
```bash
brew install boost
brew install asio
brew install mysql-connector-c++
brew install gd
brew install qrencode
brew install zlib
brew install brotli
```

#### 3.2Ubuntu

- system requirements

```
>= 20.04
```
**Notice：** Requires gcc11 support. For more installation details, please see [ubuntu install gcc.txt](ubuntu%20install%20gcc.txt)

- Environment configuration  
[paozhu linux environment configuration](https://github.com/hggq/paozhu/wiki/linux-%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE)

### 4.Install

```shell
mkdir temp
mkdir log
mkdir build
cd build
cmake ..
make
```

### 5.hosts configuration

- view`conf/server.conf`file and get`mainhost`value
- open host file

```shell
sudo vim /etc/hosts
```

Add to the last line of the hosts file (if it is www.869869.com)

```text
127.0.0.1 www.869869.com
```

### 6.https test

run

```shell
sudo ./bin/paozhu 
```

open the browser and enter http://localhost in the address bar

![正确运行效果](https://github.com/hggq/paozhu/blob/main/www/default/firstrun.jpg)

for more details, please see the source code under the `controller` directory, which includes `CURD` examples.

###  7.Related tutorial

1. [paozhu Principle](https://github.com/hggq/paozhu/wiki/paozhu-cpp-web-framework-%E6%A1%86%E6%9E%B6%E5%8E%9F%E7%90%86)

2. [paozhu hello world](https://github.com/hggq/paozhu/wiki/paozhu-%E6%A1%86%E6%9E%B6hello-world)

3. [paozhu ORM](https://github.com/hggq/paozhu/wiki/paozhu-%E6%A1%86%E6%9E%B6ORM%E5%85%A5%E9%97%A8)

4. [paozhu view](https://github.com/hggq/paozhu/wiki/paozhu-%E6%A1%86%E6%9E%B6view-%E8%A7%86%E5%9B%BE%E5%85%A5%E9%97%A8)

5. [paozhu CURD](https://github.com/hggq/paozhu/wiki/paozhu-%E6%A1%86%E6%9E%B6-CRUD-%E6%95%99%E7%A8%8B)

### 8.Roadmap

* [x] 1.Improved http features  
* [x] 2.Websocket client  
* [x] 3.Support windows  
* [x] 4.Postgres,sqlite orm  

### 9.Contribute👏👋

welcome to raise issues for mutual communication, and of course, we also welcome your active PR.


### 10.LICENSE

Paozhu is provided under the [MIT License](LICENSE)