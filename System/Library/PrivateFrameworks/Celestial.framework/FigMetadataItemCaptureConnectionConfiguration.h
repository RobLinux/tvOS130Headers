/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;
	int _sourceSubType;

}

@property (nonatomic,retain) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
@property (nonatomic,retain) OpaqueCMClockRef clock;                                      //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) int sourceSubType;                                           //@synthesize sourceSubType=_sourceSubType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(OpaqueCMClockRef)clock;
-(int)sourceSubType;
-(void)setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setClock:(OpaqueCMClockRef)arg1 ;
-(void)setSourceSubType:(int)arg1 ;
@end

