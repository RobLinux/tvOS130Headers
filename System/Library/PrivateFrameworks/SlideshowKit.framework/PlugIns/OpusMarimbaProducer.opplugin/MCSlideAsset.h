/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
@class MCAssetVideo, NSString;

@interface MCSlideAsset : NSObject {

	MCAssetVideo* _asset;
	NSString* _kenBurnsType;
	CGPoint center;
	double scale;
	double rotation;

}

@property (retain) MCAssetVideo * asset;               //@synthesize asset=_asset - In the implementation block
@property (copy) NSString * kenBurnsType;              //@synthesize kenBurnsType=_kenBurnsType - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(MCAssetVideo *)asset;
-(void)setAsset:(MCAssetVideo *)arg1 ;
-(NSString *)kenBurnsType;
-(void)setKenBurnsType:(NSString *)arg1 ;
@end

