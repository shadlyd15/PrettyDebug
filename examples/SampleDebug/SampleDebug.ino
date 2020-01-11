#include "PrettyDebug.h"

void setup(){
    Serial.begin(115200);
    ATTACH_DEBUG_STREAM(&Serial);

    DEBUG_OK("Pretty Debug Example Sketch");
    DEBUG_TRACE();

    DEBUG_OK("An Example OK Message From %s", "PrettyDebug");
    DEBUG_ERROR("An Example ERROR Message From %s", "PrettyDebug");
    DEBUG_ALERT("An Example ALERT Message From %s", "PrettyDebug");
    DEBUG_WARNING("An Example WARNING Message From %s", "PrettyDebug");
    
    int Sample_Variable = 123;
    int Sample_Array[] = {1, 2, 3, 4, 5};
    
    DEBUG_VARIABLE(Sample_Variable, "%d");
    DEBUG_ARRAY(Sample_Array, 5, "%02X");
}

void loop(){

}