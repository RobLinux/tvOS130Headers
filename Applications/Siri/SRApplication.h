/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIApplication.h>
#import <Siri/SiriUIApplication.h>
#import <Siri/SROrientationDelegate.h>

@protocol SRApplicationDataSource;
@class NSString;

@interface SRApplication : UIApplication <SiriUIApplication, SROrientationDelegate> {

	long long _frontMostAppOrientation;
	id<SRApplicationDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<SRApplicationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect applicationFrame; 
+(id)sharedApplication;
-(id<SRApplicationDataSource>)dataSource;
-(void)setDataSource:(id<SRApplicationDataSource>)arg1 ;
-(CGRect)applicationFrame;
-(long long)_frontMostAppOrientation;
-(long long)launchOrientation;
-(void)setFrontMostAppOrientation:(long long)arg1 ;
@end
