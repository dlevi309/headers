#import "FBSApplicationTrustDataProvider.h"

typedef NS_ENUM(NSInteger, FBSApplicationTrustState) {
    FBSApplicationTrustStateGeneric = 1,
    FBSApplicationTrustStateBlacklisted,
    FBSApplicationTrustStateProfileExpired,
    FBSApplicationTrustStateProfileMissing,
    FBSApplicationTrustStateProfileRevoked,
    FBSApplicationTrustStateProfileNeedsNetworkValidation,
    FBSApplicationTrustStateNeedsExplicitUserTrust,
    FBSApplicationTrustStateTrusted,
    FBSApplicationTrustStateSignatureVersionUnsupported
};