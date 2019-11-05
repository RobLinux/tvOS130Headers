/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAControl.h>

@class NSArray;

@interface ASASelectorControl : ASAControl {

	NSArray* _currentItems;

}

@property (assign,nonatomic) unsigned currentItem; 
@property (assign,nonatomic) NSArray * currentItems;                       //@synthesize currentItems=_currentItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableItems; 
-(void)setCurrentItem:(unsigned)arg1 ;
-(unsigned)currentItem;
-(NSArray *)currentItems;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(id)nameForItem:(unsigned)arg1 ;
-(NSArray *)availableItems;
@end

