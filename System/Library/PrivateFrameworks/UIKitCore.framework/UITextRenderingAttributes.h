/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {

	UIFont* _font;
	double _minimumFontSize;
	double _actualFontSize;
	double _lineSpacing;
	long long _lineBreakMode;
	long long _baselineAdjustment;
	double _trackingAdjustment;
	double _minimumTrackingAdjustment;
	double _actualTrackingAdjustment;
	long long _alignment;
	BOOL _includeEmoji;
	CGRect _truncationRect;
	BOOL _drawUnderline;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
@end

