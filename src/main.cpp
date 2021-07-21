#include <vulkan_thing_engine/platform/entry_point.h>
#include <vulkan_thing_engine/platform/game.h>

class VulkanThing : public Game {
    public:
    VulkanThing() : Game() {
        std::cout << "Hello, VulkanThing!" << std::endl;
    }
};

Game* CreateGame() {
    return new VulkanThing();
}