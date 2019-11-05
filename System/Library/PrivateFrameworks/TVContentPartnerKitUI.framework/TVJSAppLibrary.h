/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <TVContentPartnerKitUI/LSApplicationWorkspaceObserverProtocol.h>
#import <TVContentPartnerKitUI/TVJSAppLibrary.h>
@class NSArray;


@protocol TVJSAppLibrary <JSExport>
@property (nonatomic,copy,readonly) NSArray * installedAppInfo; 
@required
-(void)openAppWithBundleID:(id)arg1;
-(NSArray *)installedAppInfo;

@end


@class NSArray, NSString;

@interface TVJSAppLibrary : IKJSObject <LSApplicationWorkspaceObserverProtocol, TVJSAppLibrary> {

	atomic_flag _needsUpdateAppInfo;
	NSArray* _installedAppInfo;

}

@property (nonatomic,copy) NSArray * installedAppInfo;              //@synthesize installedAppInfo=_installedAppInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)_setNeedsUpdateAppInfo;
-(void)setInstalledAppInfo:(NSArray *)arg1 ;
-(void)_notifyJSAppInfoDidChange;
-(void)_updateInstalledAppInfo;
-(void)openAppWithBundleID:(id)arg1 ;
-(NSArray *)installedAppInfo;
@end

