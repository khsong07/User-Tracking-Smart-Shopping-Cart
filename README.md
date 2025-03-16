# UWB-Based User Tracking Smart Shopping Cart

## Overview
This project combines **Ultra-Wideband (UWB)** technology, barcode recognition, weight sensors, and both **OLED/LCD** displays to track a user’s location indoors and provide an interactive experience. By accurately determining user position and integrating various sensors, the system can autonomously align or move displays and offer real-time information updates.

## Key Features
1. **UWB Positioning**  
   - Uses Time of Flight (ToF) methods (e.g., Two-Way Ranging, TWR) to measure distances between anchors and tags.  
   - Implements trilateration to pinpoint user location with high accuracy.  
   - Supports dynamic or moving tags and adaptively updates positions in real time.

2. **Motorized Alignment**  
   - Adjusts display orientation or physical devices (e.g., motors) based on user location.  
   - Aligns OLED/LCD screens toward the user for better visibility and engagement.

3. **Barcode & Weight Sensor Integration**  
   - Recognizes and processes barcodes to identify or classify items.  
   - Monitors changes in weight (via weight sensors) and updates corresponding display information.  
   - Demonstrates how separate sensor data flows can be combined in a unified control system.

4. **Visual Feedback on OLED & LCD**  
   - Displays relevant data (e.g., product info, user guidance) on small OLED or larger LCD screens.  
   - Dynamically updates according to sensor inputs and user position.

## System Flow
1. **Data Acquisition**  
   - UWB anchors measure distance to the user’s tag.  
   - Barcode scanner collects item codes, and weight sensor relays weight changes.

2. **Data Processing**  
   - Trilateration algorithm calculates user position.  
   - Controller checks barcode/weight data and correlates them with stored product or usage information.

3. **Motor/Display Control**  
   - Motor driver adjusts device orientation based on user’s location.  
   - OLED/LCD displays content relevant to the detected product or user context.

4. **Feedback Loop**  
   - Continuously refines positioning and device alignment in real time.  
   - Updates visuals or prompts based on new sensor inputs.

## Advantages
- **High Accuracy**: Employs UWB for reliable short-range positioning with minimal interference.  
- **Scalability**: Flexible architecture to add more anchors, sensors, or displays.  
- **User-Centric Interaction**: Automated alignment and context-sensitive information enhance usability.

## Conclusion
By integrating UWB location tracking, sensor fusion (barcode and weight data), and dynamic display control, this system creates an interactive environment that adapts to users in real time. Its modular design allows it to be extended for diverse use cases, such as retail kiosks, smart shelves, and other IoT-driven interactive systems.
