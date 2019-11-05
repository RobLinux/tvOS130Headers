/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPNewsUsagePropensity.h>
@class NSData;


@protocol _CPNewsUsagePropensity <NSObject>
@property (assign,nonatomic) float other; 
@property (assign,nonatomic) int totalEngagements; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(float)other;
-(id)initWithJSON:(id)arg1;
-(void)setOther:(float)arg1;
-(void)setTotalEngagements:(int)arg1;
-(int)totalEngagements;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSData, NSString;

@interface _CPNewsUsagePropensity : PBCodable <_CPNewsUsagePropensity, NSSecureCoding> {

	float _other;
	int _totalEngagements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float other;                           //@synthesize other=_other - In the implementation block
@property (assign,nonatomic) int totalEngagements;                  //@synthesize totalEngagements=_totalEngagements - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(float)other;
-(id)initWithJSON:(id)arg1 ;
-(void)setOther:(float)arg1 ;
-(void)setTotalEngagements:(int)arg1 ;
-(int)totalEngagements;
@end

