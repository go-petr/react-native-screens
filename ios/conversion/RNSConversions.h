#pragma once

#if defined(__cplusplus)
#import <UIKit/UIKit.h>
#import <folly/dynamic.h>
#import "RNSOrientationConversions.h"

namespace rnscreens::conversion {

// copied from FollyConvert.mm
id RNSConvertFollyDynamicToId(const folly::dynamic &dyn);

#if !TARGET_OS_TV
// Kept so that `ios/legacy/RNSScreen.mm` compiles unchanged; new code uses
// `RNSOrientationFromInterfaceOrientationMask`.
inline RNSOrientation RNSOrientationFromUIInterfaceOrientationMask(
    UIInterfaceOrientationMask orientationMask) {
  return RNSOrientationFromInterfaceOrientationMask(orientationMask);
}
#endif // !TARGET_OS_TV

}; // namespace rnscreens::conversion

#endif // defined(__cplusplus)
