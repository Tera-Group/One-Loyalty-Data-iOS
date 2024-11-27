// swift-tools-version:5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription
let package = Package(
    name: "1loyalty",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "1loyalty",
            targets: ["1loyalty"])
    ],
    dependencies: [
    ],
    targets: [
        .binaryTarget(
            name: "1loyalty",
            path: "1loyalty.xcframework"
        )
    ]
)
