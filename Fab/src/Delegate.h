#pragma once


template<typename DataType>
class Delegate 
{
public:
  Delegate() = default;


  void subscribe(const std::string& key, std::function<void(DataType)> callback)
  {
    mCallbacks.emplace(key, callback);
  }

  void unsubscribe(const std::string& key)
  {
    mCallbacks.erase(key);
  }

  void fire(DataType data)
  {
    for (const auto& callback : mCallbacks)
    {
      callback(data);
    }
  }

private:
  std::unordered_map<std::string, std::function<void(DataType)>> mCallbacks;
};
