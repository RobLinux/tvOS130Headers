/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary;

@interface TVSettingsTCCFacade : NSObject {

	NSArray* _infoArray;
	NSString* _serviceName;
	NSDictionary* _infoByIdentifier;

}

@property (nonatomic,readonly) NSDictionary * infoByIdentifier;              //@synthesize infoByIdentifier=_infoByIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * infoArray;                              //@synthesize infoArray=_infoArray - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(id)infoForIdentifier:(id)arg1 ;
-(NSArray *)infoArray;
-(void)_updateTCCInfo;
-(id)fetchInfoMapping;
-(void)setInfoArray:(NSArray *)arg1 ;
-(BOOL)setAllowAccess:(BOOL)arg1 forInfo:(id)arg2 ;
-(NSDictionary *)infoByIdentifier;
@end

