// -----
// Lightweight JSON Library w Encryption
// 2026 selyansel
// -----
// This was originally made for a small school project of mine.
// The available JSON library was too fucking heavy for just basic JSON generation.
// -----

class JSONMaker {
private:
  String buffer;
  bool firstItem;

public:
  void begin() {
    buffer = "{";
    firstItem = true;
  }

  void add(String key, String value) {
    addSeparator();
    buffer += "\"" + key + "\":\"" + value + "\"";
  }

  void add(String key, long value) {
    addSeparator();
    buffer += "\"" + key + "\":" + String(value);
  }

  void add(String key, float value, int precision = 2) {
    addSeparator();
    buffer += "\"" + key + "\":" + String(value, precision);
  }

  void end() {
    buffer += "}";
  }

  String get() {
    return buffer;
  }

private:
  void addSeparator() {
    if (!firstItem) {
      buffer += ",";
    }
    firstItem = false;
  }
};