/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <cloudphotod/NSCopying.h>

@interface CPLCKAvailabilityResponse : PBCodable <NSCopying> {

	int _feature;
	BOOL _allowed;
	SCD_Struct_CP8 _has;

}

@property (assign,nonatomic) BOOL hasFeature; 
@property (assign,nonatomic) int feature;                  //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) BOOL hasAllowed; 
@property (assign,nonatomic) BOOL allowed;                 //@synthesize allowed=_allowed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)feature;
-(void)setFeature:(int)arg1 ;
-(void)setAllowed:(BOOL)arg1 ;
-(void)setHasAllowed:(BOOL)arg1 ;
-(BOOL)hasAllowed;
-(BOOL)allowed;
-(void)setHasFeature:(BOOL)arg1 ;
-(BOOL)hasFeature;
-(id)featureAsString:(int)arg1 ;
-(int)StringAsFeature:(id)arg1 ;
@end

