/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObjectLight.h>

@class NSString;

@interface MCAction : MCObjectLight {

	unsigned _flags;
	NSString* _targetObjectID;

}

@property (copy) NSString * targetObjectID;                    //@synthesize targetObjectID=_targetObjectID - In the implementation block
@property (assign,nonatomic) BOOL tracksInParent; 
-(id)description;
-(id)snapshot;
-(BOOL)isSnapshot;
-(void)setTargetObjectID:(NSString *)arg1 ;
-(void)demolish;
-(NSString *)targetObjectID;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(BOOL)tracksInParent;
-(void)setTracksInParent:(BOOL)arg1 ;
@end

