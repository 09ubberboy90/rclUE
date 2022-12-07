// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/LaserScan.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/laser_scan__functions.h"

#include "rcutils/allocator.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ranges`
// Member `intensities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool sensor_msgs__msg__LaserScan__init(sensor_msgs__msg__LaserScan* msg)
{
    if (!msg)
    {
        return false;
    }
    // header
    if (!std_msgs__msg__Header__init(&msg->header))
    {
        sensor_msgs__msg__LaserScan__fini(msg);
        return false;
    }
    // angle_min
    // angle_max
    // angle_increment
    // time_increment
    // scan_time
    // range_min
    // range_max
    // ranges
    if (!rosidl_runtime_c__float__Sequence__init(&msg->ranges, 0))
    {
        sensor_msgs__msg__LaserScan__fini(msg);
        return false;
    }
    // intensities
    if (!rosidl_runtime_c__float__Sequence__init(&msg->intensities, 0))
    {
        sensor_msgs__msg__LaserScan__fini(msg);
        return false;
    }
    return true;
}

void sensor_msgs__msg__LaserScan__fini(sensor_msgs__msg__LaserScan* msg)
{
    if (!msg)
    {
        return;
    }
    // header
    std_msgs__msg__Header__fini(&msg->header);
    // angle_min
    // angle_max
    // angle_increment
    // time_increment
    // scan_time
    // range_min
    // range_max
    // ranges
    rosidl_runtime_c__float__Sequence__fini(&msg->ranges);
    // intensities
    rosidl_runtime_c__float__Sequence__fini(&msg->intensities);
}

bool sensor_msgs__msg__LaserScan__are_equal(const sensor_msgs__msg__LaserScan* lhs, const sensor_msgs__msg__LaserScan* rhs)
{
    if (!lhs || !rhs)
    {
        return false;
    }
    // header
    if (!std_msgs__msg__Header__are_equal(&(lhs->header), &(rhs->header)))
    {
        return false;
    }
    // angle_min
    if (lhs->angle_min != rhs->angle_min)
    {
        return false;
    }
    // angle_max
    if (lhs->angle_max != rhs->angle_max)
    {
        return false;
    }
    // angle_increment
    if (lhs->angle_increment != rhs->angle_increment)
    {
        return false;
    }
    // time_increment
    if (lhs->time_increment != rhs->time_increment)
    {
        return false;
    }
    // scan_time
    if (lhs->scan_time != rhs->scan_time)
    {
        return false;
    }
    // range_min
    if (lhs->range_min != rhs->range_min)
    {
        return false;
    }
    // range_max
    if (lhs->range_max != rhs->range_max)
    {
        return false;
    }
    // ranges
    if (!rosidl_runtime_c__float__Sequence__are_equal(&(lhs->ranges), &(rhs->ranges)))
    {
        return false;
    }
    // intensities
    if (!rosidl_runtime_c__float__Sequence__are_equal(&(lhs->intensities), &(rhs->intensities)))
    {
        return false;
    }
    return true;
}

bool sensor_msgs__msg__LaserScan__copy(const sensor_msgs__msg__LaserScan* input, sensor_msgs__msg__LaserScan* output)
{
    if (!input || !output)
    {
        return false;
    }
    // header
    if (!std_msgs__msg__Header__copy(&(input->header), &(output->header)))
    {
        return false;
    }
    // angle_min
    output->angle_min = input->angle_min;
    // angle_max
    output->angle_max = input->angle_max;
    // angle_increment
    output->angle_increment = input->angle_increment;
    // time_increment
    output->time_increment = input->time_increment;
    // scan_time
    output->scan_time = input->scan_time;
    // range_min
    output->range_min = input->range_min;
    // range_max
    output->range_max = input->range_max;
    // ranges
    if (!rosidl_runtime_c__float__Sequence__copy(&(input->ranges), &(output->ranges)))
    {
        return false;
    }
    // intensities
    if (!rosidl_runtime_c__float__Sequence__copy(&(input->intensities), &(output->intensities)))
    {
        return false;
    }
    return true;
}

sensor_msgs__msg__LaserScan* sensor_msgs__msg__LaserScan__create()
{
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_msgs__msg__LaserScan* msg =
        (sensor_msgs__msg__LaserScan*)allocator.allocate(sizeof(sensor_msgs__msg__LaserScan), allocator.state);
    if (!msg)
    {
        return NULL;
    }
    memset(msg, 0, sizeof(sensor_msgs__msg__LaserScan));
    bool success = sensor_msgs__msg__LaserScan__init(msg);
    if (!success)
    {
        allocator.deallocate(msg, allocator.state);
        return NULL;
    }
    return msg;
}

void sensor_msgs__msg__LaserScan__destroy(sensor_msgs__msg__LaserScan* msg)
{
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    if (msg)
    {
        sensor_msgs__msg__LaserScan__fini(msg);
    }
    allocator.deallocate(msg, allocator.state);
}

bool sensor_msgs__msg__LaserScan__Sequence__init(sensor_msgs__msg__LaserScan__Sequence* array, size_t size)
{
    if (!array)
    {
        return false;
    }
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_msgs__msg__LaserScan* data = NULL;

    if (size)
    {
        data = (sensor_msgs__msg__LaserScan*)allocator.zero_allocate(size, sizeof(sensor_msgs__msg__LaserScan), allocator.state);
        if (!data)
        {
            return false;
        }
        // initialize all array elements
        size_t i;
        for (i = 0; i < size; ++i)
        {
            bool success = sensor_msgs__msg__LaserScan__init(&data[i]);
            if (!success)
            {
                break;
            }
        }
        if (i < size)
        {
            // if initialization failed finalize the already initialized array elements
            for (; i > 0; --i)
            {
                sensor_msgs__msg__LaserScan__fini(&data[i - 1]);
            }
            allocator.deallocate(data, allocator.state);
            return false;
        }
    }
    array->data = data;
    array->size = size;
    array->capacity = size;
    return true;
}

void sensor_msgs__msg__LaserScan__Sequence__fini(sensor_msgs__msg__LaserScan__Sequence* array)
{
    if (!array)
    {
        return;
    }
    rcutils_allocator_t allocator = rcutils_get_default_allocator();

    if (array->data)
    {
        // ensure that data and capacity values are consistent
        assert(array->capacity > 0);
        // finalize all array elements
        for (size_t i = 0; i < array->capacity; ++i)
        {
            sensor_msgs__msg__LaserScan__fini(&array->data[i]);
        }
        allocator.deallocate(array->data, allocator.state);
        array->data = NULL;
        array->size = 0;
        array->capacity = 0;
    }
    else
    {
        // ensure that data, size, and capacity values are consistent
        assert(0 == array->size);
        assert(0 == array->capacity);
    }
}

sensor_msgs__msg__LaserScan__Sequence* sensor_msgs__msg__LaserScan__Sequence__create(size_t size)
{
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_msgs__msg__LaserScan__Sequence* array =
        (sensor_msgs__msg__LaserScan__Sequence*)allocator.allocate(sizeof(sensor_msgs__msg__LaserScan__Sequence), allocator.state);
    if (!array)
    {
        return NULL;
    }
    bool success = sensor_msgs__msg__LaserScan__Sequence__init(array, size);
    if (!success)
    {
        allocator.deallocate(array, allocator.state);
        return NULL;
    }
    return array;
}

void sensor_msgs__msg__LaserScan__Sequence__destroy(sensor_msgs__msg__LaserScan__Sequence* array)
{
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    if (array)
    {
        sensor_msgs__msg__LaserScan__Sequence__fini(array);
    }
    allocator.deallocate(array, allocator.state);
}

bool sensor_msgs__msg__LaserScan__Sequence__are_equal(const sensor_msgs__msg__LaserScan__Sequence* lhs,
                                                      const sensor_msgs__msg__LaserScan__Sequence* rhs)
{
    if (!lhs || !rhs)
    {
        return false;
    }
    if (lhs->size != rhs->size)
    {
        return false;
    }
    for (size_t i = 0; i < lhs->size; ++i)
    {
        if (!sensor_msgs__msg__LaserScan__are_equal(&(lhs->data[i]), &(rhs->data[i])))
        {
            return false;
        }
    }
    return true;
}

bool sensor_msgs__msg__LaserScan__Sequence__copy(const sensor_msgs__msg__LaserScan__Sequence* input,
                                                 sensor_msgs__msg__LaserScan__Sequence* output)
{
    if (!input || !output)
    {
        return false;
    }
    if (output->capacity < input->size)
    {
        const size_t allocation_size = input->size * sizeof(sensor_msgs__msg__LaserScan);
        rcutils_allocator_t allocator = rcutils_get_default_allocator();
        sensor_msgs__msg__LaserScan* data =
            (sensor_msgs__msg__LaserScan*)allocator.reallocate(output->data, allocation_size, allocator.state);
        if (!data)
        {
            return false;
        }
        // If reallocation succeeded, memory may or may not have been moved
        // to fulfill the allocation request, invalidating output->data.
        output->data = data;
        for (size_t i = output->capacity; i < input->size; ++i)
        {
            if (!sensor_msgs__msg__LaserScan__init(&output->data[i]))
            {
                // If initialization of any new item fails, roll back
                // all previously initialized items. Existing items
                // in output are to be left unmodified.
                for (; i-- > output->capacity;)
                {
                    sensor_msgs__msg__LaserScan__fini(&output->data[i]);
                }
                return false;
            }
        }
        output->capacity = input->size;
    }
    output->size = input->size;
    for (size_t i = 0; i < input->size; ++i)
    {
        if (!sensor_msgs__msg__LaserScan__copy(&(input->data[i]), &(output->data[i])))
        {
            return false;
        }
    }
    return true;
}
