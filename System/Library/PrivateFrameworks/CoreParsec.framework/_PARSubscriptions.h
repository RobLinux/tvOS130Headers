/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_PARSubscriptions.h>
@class NSData;


@protocol _PARSubscriptions <NSObject>
@property (nonatomic,copy) NSData * subscriptionJSON; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setSubscriptionJSON:(id)arg1;
-(NSData *)subscriptionJSON;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSData, NSString;

@interface _PARSubscriptions : PBCodable <_PARSubscriptions, NSSecureCoding> {

	NSData* _subscriptionJSON;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * subscriptionJSON;               //@synthesize subscriptionJSON=_subscriptionJSON - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setSubscriptionJSON:(NSData *)arg1 ;
-(NSData *)subscriptionJSON;
@end

