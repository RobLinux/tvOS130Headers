/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface ALCLRowingModel : PBCodable <NSCopying> {

	float _strokeAmp;
	float _strokeFrequency;
	float _strokePower;
	SCD_Struct_AL89 _has;

}

@property (assign,nonatomic) float strokePower;                    //@synthesize strokePower=_strokePower - In the implementation block
@property (assign,nonatomic) BOOL hasStrokeAmp; 
@property (assign,nonatomic) float strokeAmp;                      //@synthesize strokeAmp=_strokeAmp - In the implementation block
@property (assign,nonatomic) BOOL hasStrokeFrequency; 
@property (assign,nonatomic) float strokeFrequency;                //@synthesize strokeFrequency=_strokeFrequency - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStrokeAmp:(float)arg1 ;
-(void)setHasStrokeAmp:(BOOL)arg1 ;
-(BOOL)hasStrokeAmp;
-(void)setStrokeFrequency:(float)arg1 ;
-(void)setHasStrokeFrequency:(BOOL)arg1 ;
-(BOOL)hasStrokeFrequency;
-(float)strokePower;
-(void)setStrokePower:(float)arg1 ;
-(float)strokeAmp;
-(float)strokeFrequency;
@end

