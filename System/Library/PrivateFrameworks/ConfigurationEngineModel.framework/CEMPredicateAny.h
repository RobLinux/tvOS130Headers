/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPredicateBase.h>
#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface CEMPredicateAny : CEMPredicateBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadPredicates;

}

@property (nonatomic,copy) NSArray * payloadPredicates;              //@synthesize payloadPredicates=_payloadPredicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithPredicates:(id)arg1 ;
+(id)buildRequiredOnlyWithPredicates:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPredicates:(NSArray *)arg1 ;
-(NSArray *)payloadPredicates;
@end

