% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/minimap2_align.R
\name{minimap2_check_callable}
\alias{minimap2_check_callable}
\title{Check if minimap2 is available}
\usage{
minimap2_check_callable(mm2_prog_path)
}
\arguments{
\item{mm2_prog_path}{the path to the directory containing minimap2}
}
\value{
TRUE if minimap2 is available, FALSE otherwise
}
\description{
Checks if minimap2 is available from given directory or in path.
Uses python's subprocess module to check if the help page is accessable.
}
