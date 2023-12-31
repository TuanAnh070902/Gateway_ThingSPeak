#include "main.h"
#include "http_request.h"

// #include "http_request.h"


void app_main(void)
{
        ESP_ERROR_CHECK( nvs_flash_init() );
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    /* This helper function configures Wi-Fi or Ethernet, as selected in menuconfig.
     * Read "Establishing Wi-Fi or Ethernet Connection" section in
     * examples/protocols/README.md for more information about this function.
     */
    ESP_ERROR_CHECK(example_connect());
    xTaskCreate(&http_post_task, "http_post_task", 4096, NULL, 5, NULL);
    xTaskCreate(&http_get_task, "http_get_task", 4096, NULL, 5, NULL);
}