#include "time_utils.h"

time_t start(){
    
  return time(NULL);
}

double stop(time_t start){

return difftime(time(NULL),start);

}
