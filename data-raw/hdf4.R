u <- "https://seaice.uni-bremen.de/data/amsr2/asi_daygrid_swath/s6250/2017/dec/Antarctic/asi-AMSR2-s6250-20171211-v5.hdf"
f <- basename(u)
p <- "inst/extdata"
curl::curl_download(u,file.path(p, f),  mode = "wb")
