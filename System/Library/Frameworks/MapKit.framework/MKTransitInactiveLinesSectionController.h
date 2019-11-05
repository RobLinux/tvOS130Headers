/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {

	NSArray* _inactiveLines;

}

@property (nonatomic,readonly) NSArray * inactiveLines;              //@synthesize inactiveLines=_inactiveLines - In the implementation block
-(id)init;
-(void)_setNeedsBuildRows;
-(id)_pagingFilter;
-(void)_buildRows;
-(NSArray *)inactiveLines;
@end
