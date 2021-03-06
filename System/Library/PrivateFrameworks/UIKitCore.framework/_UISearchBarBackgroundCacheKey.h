/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>

@interface _UISearchBarBackgroundCacheKey : NSObject <NSCopying> {

	long long _barPosition;
	BOOL _usesContiguousBarBackground;
	double _scale;
	double _alpha;
	double _height;
	double _statusBarHeight;
	CGColorRef _backgroundColor;
	CGColorRef _strokeColor;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(id)initWithBarPosition:(long long)arg1 usesContiguousBarBackground:(BOOL)arg2 scale:(double)arg3 alpha:(double)arg4 height:(double)arg5 statusBarHeight:(double)arg6 backgroundColor:(CGColorRef)arg7 strokeColor:(CGColorRef)arg8 ;
@end

