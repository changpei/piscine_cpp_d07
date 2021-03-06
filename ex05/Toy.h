#ifndef TOY_H_
#define TOY_H_

#include <ostream>
#include <string>
#include "Picture.h"
class Toy{
 public:
  enum ToyType{ BASIC_TOY, ALIEN, BUZZ, WOODY };
 protected:
  Picture _picture;
  ToyType _type;
  std::string _name;
  std::string e;
 public:

  Toy();
  Toy(const Toy &);
  Toy(ToyType type, const std::string &name, const std::string &file);
  ~Toy(){};
  //get
  ToyType getType() const;
  std::string getName() const;
  std::string getAscii() const;
  //set
  void setData(std::string a){
    _picture.setData(a);
  };
  bool setAscii(const std::string &fn);
  void setName(const std::string &fn);
  Toy	operator=(const Toy &s);
  virtual void speak(const std::string &s){
    std::cout << _name << " \"" <<  s << "\"" << std::endl;
  };
  virtual bool speak_es(const std::string &s){
    (void) s;
    return true;
  };

  class Error{
  public:
    Error(){};
    ~Error(){};
    typedef enum { UNKNOWN, PICTURE, SPEAK } ErrorType;
    ErrorType type;
    std::string _what;
    std::string _where;
    std::string where() const{ return _where; }
    std::string what() const{ return _what; }
  };
  Toy::Error getLastError();
};

std::ostream &operator<<(std::ostream &f, const Toy &a);
void operator<<(Toy &a, const std::string &str);

#endif /* Watson */
