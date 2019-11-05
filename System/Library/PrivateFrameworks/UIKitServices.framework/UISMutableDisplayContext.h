/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKitServices/UISDisplayContext.h>

@class FBSDisplayConfiguration, UISApplicationSupportDisplayEdgeInfo;

@interface UISMutableDisplayContext : UISDisplayContext

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInfo * displayEdgeInfo; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (assign,nonatomic) unsigned long long userInterfaceStyle; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(void)setUserInterfaceStyle:(unsigned long long)arg1 ;
-(void)setArtworkSubtype:(unsigned long long)arg1 ;
-(void)setDisplayEdgeInfo:(UISApplicationSupportDisplayEdgeInfo *)arg1 ;
@end

