#include <iostream>
#include <cpr/cpr.h>

int main(){
    cpr::Response r = cpr::Get(cpr::Url{"https://api.github.com/users/sourenaKhanzadeh"});

    std::cout << r.status_code << std::endl;
    std::cout << r.header["content-type"] << std::endl;
    std::cout << r.text << std::endl;
    return 0;
}
