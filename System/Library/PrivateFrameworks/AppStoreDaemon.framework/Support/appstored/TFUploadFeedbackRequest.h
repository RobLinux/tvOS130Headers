/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <appstored/NSCopying.h>

@class TFAppleWatch, TFApplication, TFDevice, TFFeedback;

@interface TFUploadFeedbackRequest : PBRequest <NSCopying> {

	unsigned long long _dsid;
	unsigned long long _posixTimestampMillis;
	TFAppleWatch* _appleWatch;
	TFApplication* _application;
	TFDevice* _device;
	TFFeedback* _feedback;
	SCD_Struct_TF8 _has;

}

@property (assign,nonatomic) BOOL hasDsid; 
@property (assign,nonatomic) unsigned long long dsid;                              //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedback; 
@property (nonatomic,retain) TFFeedback * feedback;                                //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL hasApplication; 
@property (nonatomic,retain) TFApplication * application;                          //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) BOOL hasDevice; 
@property (nonatomic,retain) TFDevice * device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) BOOL hasAppleWatch; 
@property (nonatomic,retain) TFAppleWatch * appleWatch;                            //@synthesize appleWatch=_appleWatch - In the implementation block
@property (assign,nonatomic) BOOL hasPosixTimestampMillis; 
@property (assign,nonatomic) unsigned long long posixTimestampMillis;              //@synthesize posixTimestampMillis=_posixTimestampMillis - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)dsid;
-(void)setDsid:(unsigned long long)arg1 ;
-(TFDevice *)device;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDevice:(TFDevice *)arg1 ;
-(void)setFeedback:(TFFeedback *)arg1 ;
-(TFFeedback *)feedback;
-(BOOL)hasFeedback;
-(TFApplication *)application;
-(void)setApplication:(TFApplication *)arg1 ;
-(void)setHasDsid:(BOOL)arg1 ;
-(BOOL)hasDsid;
-(void)setPosixTimestampMillis:(unsigned long long)arg1 ;
-(void)setAppleWatch:(TFAppleWatch *)arg1 ;
-(BOOL)hasApplication;
-(BOOL)hasDevice;
-(BOOL)hasAppleWatch;
-(unsigned long long)posixTimestampMillis;
-(void)setHasPosixTimestampMillis:(BOOL)arg1 ;
-(BOOL)hasPosixTimestampMillis;
-(TFAppleWatch *)appleWatch;
@end

