#pragma once

#import <UIKit/UIKit.h>
#import "RNSEnums.h"

NS_ASSUME_NONNULL_BEGIN

#if !TARGET_OS_TV
FOUNDATION_EXTERN UIInterfaceOrientationMask RNSInterfaceOrientationMaskFromOrientation(RNSOrientation orientation);

// Currently unused in stack v5. Maybe remove after stopping support for v4.
FOUNDATION_EXTERN RNSOrientation RNSOrientationFromInterfaceOrientationMask(UIInterfaceOrientationMask orientationMask);
#endif // !TARGET_OS_TV

NS_ASSUME_NONNULL_END
