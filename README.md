# ardJSONMaker
Lightweight JSON generator library for Arduino

## Installation

- Import the library using ``#include "JSONMaker.h"``

## Usage

Example JSON generation:
```
#include "JSONMaker.h"
JSONMaker jsonHandler;

void setup(){
  Serial.begin(9600);
}

void loop(){
  json.begin();
  json.add("exampleValue","test");
  json.end();
  Serial.println(json.get());
}
```
Output :
```
{
  "exampleValue":"test"
}
```

## Documentation

Available in the Wiki section.
