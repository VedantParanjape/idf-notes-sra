# ESP IDF App with component and Kconfig

## component
Three ways to use a component:
* Add it in esp/esp-idf/components - but this is not be done.
* create a directory name `components` in the top-level of the project
* add path to the component in CMakeLists.txt using `EXTRA_COMPONENT_DIRS`

## Kconfig
* Kconfig file always needs to be in a component
* Each component can also have a Kconfig file, alongside CMakeLists.txt. This contains configuration settings to add to the configuration menu for this component.

Two ways to use Kconfig:
* in a component at top level
* if used in a project it must be inside `myproject/main` as we know main is a special component and Kconfig can only be defined in a component