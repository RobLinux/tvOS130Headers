/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <appstored/appstored-Structs.h>
@interface XPCServiceCatalog : NSObject {

	/*^block*/id _diagnosticServiceProvider;
	/*^block*/id _CrossfireServiceProvider;
	/*^block*/id _IAPHistoryServiceProvider;
	/*^block*/id _installationServiceProvider;
	/*^block*/id _libraryServiceProvider;
	/*^block*/id _OcelotServiceProvider;
	/*^block*/id _PurchaseHistoryServiceProvider;
	/*^block*/id _PurchaseServiceProvider;
	/*^block*/id _RepairServiceProvider;
	/*^block*/id _UpdatesServiceProvider;
	ASDServiceEntitlement _diagnosticServiceEntitlement;
	ASDServiceEntitlement _CrossfireServerEntitlement;
	ASDServiceEntitlement _IAPHistoryServiceEntitlement;
	ASDServiceEntitlement _installationServiceEntitlement;
	ASDServiceEntitlement _libraryServiceEntitlement;
	ASDServiceEntitlement _OcelotServerEntitlement;
	ASDServiceEntitlement _PurchaseHistoryServiceEntitlement;
	ASDServiceEntitlement _PurchaseServiceEntitlement;
	ASDServiceEntitlement _RepairServiceEntitlement;
	ASDServiceEntitlement _UpdatesServiceEntitlement;

}

@property (assign) ASDServiceEntitlement diagnosticServiceEntitlement;                   //@synthesize diagnosticServiceEntitlement=_diagnosticServiceEntitlement - In the implementation block
@property (copy) id diagnosticServiceProvider;                                           //@synthesize diagnosticServiceProvider=_diagnosticServiceProvider - In the implementation block
@property (assign) ASDServiceEntitlement CrossfireServerEntitlement;                     //@synthesize CrossfireServerEntitlement=_CrossfireServerEntitlement - In the implementation block
@property (copy) id CrossfireServiceProvider;                                            //@synthesize CrossfireServiceProvider=_CrossfireServiceProvider - In the implementation block
@property (assign) ASDServiceEntitlement IAPHistoryServiceEntitlement;                   //@synthesize IAPHistoryServiceEntitlement=_IAPHistoryServiceEntitlement - In the implementation block
@property (copy) id IAPHistoryServiceProvider;                                           //@synthesize IAPHistoryServiceProvider=_IAPHistoryServiceProvider - In the implementation block
@property (assign) ASDServiceEntitlement installationServiceEntitlement;                 //@synthesize installationServiceEntitlement=_installationServiceEntitlement - In the implementation block
@property (copy) id installationServiceProvider;                                         //@synthesize installationServiceProvider=_installationServiceProvider - In the implementation block
@property (assign) ASDServiceEntitlement libraryServiceEntitlement;                      //@synthesize libraryServiceEntitlement=_libraryServiceEntitlement - In the implementation block
@property (copy) id libraryServiceProvider;                                              //@synthesize libraryServiceProvider=_libraryServiceProvider - In the implementation block
@property (assign) ASDServiceEntitlement OcelotServerEntitlement;                        //@synthesize OcelotServerEntitlement=_OcelotServerEntitlement - In the implementation block
@property (copy) id OcelotServiceProvider;                                               //@synthesize OcelotServiceProvider=_OcelotServiceProvider - In the implementation block
@property (assign) ASDServiceEntitlement PurchaseHistoryServiceEntitlement;              //@synthesize PurchaseHistoryServiceEntitlement=_PurchaseHistoryServiceEntitlement - In the implementation block
@property (copy) id PurchaseHistoryServiceProvider;                                      //@synthesize PurchaseHistoryServiceProvider=_PurchaseHistoryServiceProvider - In the implementation block
@property (assign) ASDServiceEntitlement PurchaseServiceEntitlement;                     //@synthesize PurchaseServiceEntitlement=_PurchaseServiceEntitlement - In the implementation block
@property (copy) id PurchaseServiceProvider;                                             //@synthesize PurchaseServiceProvider=_PurchaseServiceProvider - In the implementation block
@property (copy) id RepairServiceProvider;                                               //@synthesize RepairServiceProvider=_RepairServiceProvider - In the implementation block
@property (assign) ASDServiceEntitlement RepairServiceEntitlement;                       //@synthesize RepairServiceEntitlement=_RepairServiceEntitlement - In the implementation block
@property (assign) ASDServiceEntitlement UpdatesServiceEntitlement;                      //@synthesize UpdatesServiceEntitlement=_UpdatesServiceEntitlement - In the implementation block
@property (copy) id UpdatesServiceProvider;                                              //@synthesize UpdatesServiceProvider=_UpdatesServiceProvider - In the implementation block
-(void)setDiagnosticServiceEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setDiagnosticServiceProvider:(id)arg1 ;
-(void)setIAPHistoryServiceEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setIAPHistoryServiceProvider:(id)arg1 ;
-(void)setInstallationServiceEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setInstallationServiceProvider:(id)arg1 ;
-(void)setLibraryServiceEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setLibraryServiceProvider:(id)arg1 ;
-(void)setPurchaseHistoryServiceEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setPurchaseHistoryServiceProvider:(id)arg1 ;
-(void)setPurchaseServiceEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setPurchaseServiceProvider:(id)arg1 ;
-(void)setRepairServiceEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setRepairServiceProvider:(id)arg1 ;
-(void)setUpdatesServiceEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setUpdatesServiceProvider:(id)arg1 ;
-(void)setCrossfireServerEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setCrossfireServiceProvider:(id)arg1 ;
-(void)setOcelotServerEntitlement:(ASDServiceEntitlement)arg1 ;
-(void)setOcelotServiceProvider:(id)arg1 ;
-(id)diagnosticServiceProvider;
-(ASDServiceEntitlement)diagnosticServiceEntitlement;
-(id)IAPHistoryServiceProvider;
-(ASDServiceEntitlement)IAPHistoryServiceEntitlement;
-(id)installationServiceProvider;
-(ASDServiceEntitlement)installationServiceEntitlement;
-(id)libraryServiceProvider;
-(ASDServiceEntitlement)libraryServiceEntitlement;
-(id)CrossfireServiceProvider;
-(ASDServiceEntitlement)CrossfireServerEntitlement;
-(id)OcelotServiceProvider;
-(ASDServiceEntitlement)OcelotServerEntitlement;
-(id)PurchaseHistoryServiceProvider;
-(ASDServiceEntitlement)PurchaseHistoryServiceEntitlement;
-(id)PurchaseServiceProvider;
-(ASDServiceEntitlement)PurchaseServiceEntitlement;
-(id)RepairServiceProvider;
-(ASDServiceEntitlement)RepairServiceEntitlement;
-(id)UpdatesServiceProvider;
-(ASDServiceEntitlement)UpdatesServiceEntitlement;
@end

