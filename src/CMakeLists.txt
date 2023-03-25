# Don't need this here, you're
# already in a project!
# set(project_name app)

# project(${project_name})
# set(target_name ${project_name})


add_executable(ReinventDataStructures main.cpp)

target_link_libraries(ReinventDataStructures
 PRIVATE
  ArrayStack)
