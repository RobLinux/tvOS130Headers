/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaServices/MediaServices-Structs.h>
@interface MSVEntitlementUtilities : NSObject
+(BOOL)_checkEntitlement:(id)arg1 inGroup:(id)arg2 ;
+(id)_checkArrayEntitlement:(id)arg1 group:(id)arg2 task:(SecTaskRef)arg3 ;
+(id)_checkBooleanEntitlement:(id)arg1 task:(SecTaskRef)arg2 ;
+(void)_processKeyChainResult:(id)arg1 ;
+(BOOL)hasEntitlement:(id)arg1 inGroup:(id)arg2 ;
+(BOOL)hasBoolEntitlement:(id)arg1 ;
@end

