/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UICellHighlightingSupport : NSObject {

	CFDictionaryRef _unhighlightedStates;
	id _cell;

}
-(void)dealloc;
-(void)highlightView:(id)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(void)cacheState:(unsigned long long)arg1 forView:(id)arg2 ;
-(void)applyState:(unsigned long long)arg1 toView:(id)arg2 ;
@end

