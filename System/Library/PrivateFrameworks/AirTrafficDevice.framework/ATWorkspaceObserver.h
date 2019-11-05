/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class NSObject;

@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver {

	NSObject*<LSApplicationWorkspaceObserverProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<ATWorkspaceObserverDelegate> delegate; 
-(NSObject*<ATWorkspaceObserverDelegate>)delegate;
-(void)setDelegate:(NSObject*<ATWorkspaceObserverDelegate>)arg1 ;
-(void)startObserving;
-(void)stopObserving;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
@end
