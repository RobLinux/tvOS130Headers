/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ApplicationHandle;

@interface ApplicationWorkspaceOperation : NSObject {

	ApplicationHandle* _applicationHandle;

}

@property (nonatomic,readonly) ApplicationHandle * applicationHandle;              //@synthesize applicationHandle=_applicationHandle - In the implementation block
@property (nonatomic,readonly) BOOL blocksAppInstallation; 
-(void)dealloc;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(id)initWithApplicationHandle:(id)arg1 ;
-(BOOL)blocksAppInstallation;
-(void)runWithCompletionBlock:(/*^block*/id)arg1 ;
-(ApplicationHandle *)applicationHandle;
@end

