#import "FBSApplicationTrustDataProvider.h"

@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {}

- (unsigned long long)trustStateForApplication:(id)arg1;

@end
