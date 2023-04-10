#include <vulkan_thing_engine/platform/entry_point.h>
#include <vulkan_thing_engine/platform/game.h>

using namespace vulkan_thing_engine;

class VulkanThing : public Game {
public:
  VulkanThing(std::string title) : Game(std::move(title)) {
    std::cout << "Hello, VulkanThing!" << std::endl;
  }

protected:
  void Update(float deltaTime) override {}
};

Game *vulkan_thing_engine::CreateGame() {
  return new VulkanThing("Vulkan Engine");
}