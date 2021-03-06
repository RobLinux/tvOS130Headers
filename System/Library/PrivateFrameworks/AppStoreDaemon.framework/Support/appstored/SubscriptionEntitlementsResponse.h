/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber;

@interface SubscriptionEntitlementsResponse : NSObject {

	NSDictionary* _dictionary;

}

@property (copy,readonly) NSNumber * accountID; 
@property (copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)accountID;
-(unsigned long long)_segmentFromString:(id)arg1 ;
-(id)entitlementsForSegment:(unsigned long long)arg1 ;
-(id)consumedIntroOfferFamilyIds;
@end

