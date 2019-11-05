/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLWifiTilesManagerProtocol <CLNotifierServiceProtocol>
@required
-(void)doAsync:(/*^block*/id)arg1;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1;
-(void)getNumberOfInputApsUsedInWifiTileForCoordinate:(SCD_Struct_CL46)arg1 withReply:(/*^block*/id)arg2;
-(void)requestTileDownloadForLat:(double)arg1 lon:(double)arg2 details:(CLTileFileDownloadDetails)arg3;

@end

