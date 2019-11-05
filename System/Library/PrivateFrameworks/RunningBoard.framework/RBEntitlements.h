/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/BSDescriptionProviding.h>
#import <RunningBoard/RBEntitlementPossessing.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject <BSDescriptionProviding, RBEntitlementPossessing> {

	NSSet* _entitlements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(id)_entitlementsForOptions:(unsigned long long)arg1 ;
-(id)_entitlementsForOption:(unsigned long long)arg1 ;
-(id)_initWithEntitlements:(id)arg1 ;
@end

