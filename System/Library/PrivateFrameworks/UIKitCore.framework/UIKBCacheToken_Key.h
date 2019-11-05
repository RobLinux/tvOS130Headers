/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {

	SCD_Union_UI77 _style;
	NSString* _cacheDisplayString;
	NSString* _cacheSecondaryDisplayString;
	NSString* _annotationString;
	int _displayTypeHint;
	int _displayRowHint;
	CGSize _size;
	int _state;
	unsigned long long _clipCorners;
	unsigned long long _groupNeighbors;
	BOOL _usesInsets;
	UIEdgeInsets _displayInsets;

}
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI76)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI76)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(void)dealloc;
-(id)string;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)hasKey;
-(SCD_Struct_UI76)styling;
-(void)setStyling:(SCD_Struct_UI76)arg1 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(void)resetAnnotations;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(id)stringForRenderFlags:(long long)arg1 lightKeyboard:(BOOL)arg2 ;
-(id)_initWithKey:(id)arg1 style:(SCD_Struct_UI76)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(void)annotateWithString:(id)arg1 ;
-(id)_stringWithAdditionalValues:(/*^block*/id)arg1 ;
@end

