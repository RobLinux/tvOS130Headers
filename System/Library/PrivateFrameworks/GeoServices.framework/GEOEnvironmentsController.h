/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOEnvironmentsControllerDelegate;
@class NSArray;

@interface GEOEnvironmentsController : NSObject {

	NSArray* _defaultEnvironmentInfos;
	NSArray* _environmentInfos;
	NSArray* _customEnvironmentInfos;
	BOOL _enableCustomEnvironments;
	id<GEOEnvironmentsControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEOEnvironmentsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<GEOEnvironmentsControllerDelegate>)delegate;
-(void)setDelegate:(id<GEOEnvironmentsControllerDelegate>)arg1 ;
-(void)reloadEnvironments;
-(void)reloadEnvironments:(/*^block*/id)arg1 ;
-(id)initEnablingCustomEnvironments:(BOOL)arg1 ;
-(id)environmentInfosForSection:(long long)arg1 ;
-(void)addCustomEnvironment:(id)arg1 ;
-(void)removeCustomEnvironment:(id)arg1 ;
-(id)activeEnvironment;
@end

