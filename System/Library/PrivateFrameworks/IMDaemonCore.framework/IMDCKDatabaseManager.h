/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainer, IMDCKMockDatabase;

@interface IMDCKDatabaseManager : NSObject {

	BOOL _useStingRay;
	CKContainer* _stingRayContainer;
	CKContainer* _manateeContainer;
	CKContainer* _nonHSA2ManateeContainer;
	IMDCKMockDatabase* _mockDatabase;
	CKContainer* _nickNameContainer;

}

@property (nonatomic,readonly) CKContainer * stingRayContainer;                    //@synthesize stingRayContainer=_stingRayContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * manateeContainer;                     //@synthesize manateeContainer=_manateeContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * nonHSA2ManateeContainer;              //@synthesize nonHSA2ManateeContainer=_nonHSA2ManateeContainer - In the implementation block
@property (nonatomic,readonly) IMDCKMockDatabase * mockDatabase;                   //@synthesize mockDatabase=_mockDatabase - In the implementation block
@property (nonatomic,readonly) CKContainer * nickNameContainer;                    //@synthesize nickNameContainer=_nickNameContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * truthContainer; 
@property (assign,nonatomic) BOOL useStingRay;                                     //@synthesize useStingRay=_useStingRay - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CKContainer *)truthContainer;
-(id)truthDatabase;
-(id)manateeDataBase;
-(id)stingRayDatabase;
-(BOOL)useStingRay;
-(id)nonHSA2ManateeDatabase;
-(id)nickNamePublicDatabase;
-(void)fetchCurrentUserForNicknameContainer:(/*^block*/id)arg1 ;
-(BOOL)_serverSaysToUseOldContainer;
-(id)_nickNameContainerIdentifier;
-(BOOL)_useMockCloudKit;
-(IMDCKMockDatabase *)mockDatabase;
-(CKContainer *)stingRayContainer;
-(CKContainer *)manateeContainer;
-(CKContainer *)nonHSA2ManateeContainer;
-(id)_nickNameContainer;
-(id)truthPublicDatabase;
-(void)setUseStingRay:(BOOL)arg1 ;
-(CKContainer *)nickNameContainer;
@end

