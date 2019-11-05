/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/NSCopying.h>

@class NSArray;

@interface TVHKMediaEntityImageURLsFetchRequest : NSObject <NSCopying> {

	BOOL _cropToFit;
	NSArray* _mediaEntities;
	unsigned long long _imageType;
	CGSize _scaleToSize;

}

@property (nonatomic,copy) NSArray * mediaEntities;                     //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (assign,nonatomic) unsigned long long imageType;              //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) CGSize scaleToSize;                        //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) BOOL cropToFit;                            //@synthesize cropToFit=_cropToFit - In the implementation block
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)imageType;
-(void)setImageType:(unsigned long long)arg1 ;
-(void)setScaleToSize:(CGSize)arg1 ;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(void)setCropToFit:(BOOL)arg1 ;
-(NSArray *)mediaEntities;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(id)initWithMediaEntities:(id)arg1 ;
@end
