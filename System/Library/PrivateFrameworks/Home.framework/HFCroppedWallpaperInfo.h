/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/NSCopying.h>

@interface HFCroppedWallpaperInfo : NSObject <NSCopying> {

	long long _source;
	double _scale;
	CGPoint _center;

}

@property (nonatomic,readonly) long long source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) CGPoint center;                //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) double scale;                  //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(long long)source;
-(id)dictionaryRepresentation;
-(double)scale;
-(CGPoint)center;
-(id)initWithSource:(long long)arg1 center:(CGPoint)arg2 scale:(double)arg3 ;
@end
