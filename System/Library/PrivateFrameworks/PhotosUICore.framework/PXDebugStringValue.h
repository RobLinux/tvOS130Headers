/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXDebugValue.h>

@class NSString;

@interface PXDebugStringValue : PXDebugValue {

	unsigned long long _highlightStyle;
	NSString* _string;

}

@property (nonatomic,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
-(NSString *)string;
-(unsigned long long)highlightStyle;
-(id)initWithLabel:(id)arg1 string:(id)arg2 highlightStyle:(unsigned long long)arg3 ;
-(id)initWithLabel:(id)arg1 boolValue:(BOOL)arg2 positiveValue:(BOOL)arg3 positiveHighlighted:(BOOL)arg4 negativeHighlighted:(BOOL)arg5 ;
-(id)initWithLabel:(id)arg1 integerValue:(long long)arg2 ;
-(id)initWithLabel:(id)arg1 doubleValue:(double)arg2 ;
-(id)initWithLabel:(id)arg1 highlightedScore:(double)arg2 ;
@end

