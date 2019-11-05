/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXAppInstallCoordinator.h>
#import <InstallCoordination/IXCoordinatorWithInstallOptions.h>
#import <InstallCoordination/IXCoordinatorWithImportance.h>

@class NSString;

@interface IXDemotingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasInstallOptions; 
+(id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
+(id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2 ;
+(BOOL)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)enumerateCoordinatorsUsingBlock:(/*^block*/id)arg1 ;
-(id)validInstallTypes;
@end

